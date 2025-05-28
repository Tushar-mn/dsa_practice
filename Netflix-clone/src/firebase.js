import { initializeApp } from "firebase/app";
import { createUserWithEmailAndPassword, getAuth, signInWithEmailAndPassword, signOut } from "firebase/auth";
import { addDoc, collection, getFirestore } from "firebase/firestore";
import { toast } from "react-toastify";

const firebaseConfig = {
  apiKey: "AIzaSyDPCRkm1bmoeop8R9WY_WabL5JteZ5qoG8",
  authDomain: "netflix-clone-a02be.firebaseapp.com",
  projectId: "netflix-clone-a02be",
  storageBucket: "netflix-clone-a02be.appspot.com",
  messagingSenderId: "1012120270070",
  appId: "1:1012120270070:web:79c1832e190ecc33f5e8d7",
  measurementId: "G-JEDBF41BXZ"
};

const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const db = getFirestore(app);

const signUp = async (name, email, password) => {
    try {
        const res = await createUserWithEmailAndPassword(auth, email, password);
        const user = res.user;
        await addDoc(collection(db, "user"), {
            uid: user.uid,
            name,
            authProvider: "local",
            email,
        });
    } catch (error) {
        console.log(error);
        toast.error(error.code.split('/')[1].split('-').join(" "));
    }
}

const login = async (email, password) => {
    try {
        await signInWithEmailAndPassword(auth, email, password);
    } catch (error) {
        console.log(error);
        toast.error(error.code.split('/')[1].split('-').join(" "));
    }
}

const logout = async () => {
    try {
        await signOut(auth);
    } catch (error) {
        console.log(error);
        alert(error.message);
    }
}

export { auth, db, login, signUp, logout };
