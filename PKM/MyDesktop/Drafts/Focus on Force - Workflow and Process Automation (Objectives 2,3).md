npm install firebase

// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyAaArCa9g7-Dr7hRCyVyHlTupfGbj0t5gE",
  authDomain: "friendlychat-41afb.firebaseapp.com",
  projectId: "friendlychat-41afb",
  storageBucket: "friendlychat-41afb.appspot.com",
  messagingSenderId: "420800035321",
  appId: "1:420800035321:web:47454f058b547894e12528",
  measurementId: "G-Y5XEWWWYMC"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const analytics = getAnalytics(app);