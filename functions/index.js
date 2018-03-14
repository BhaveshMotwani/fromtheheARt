'use strict';

const functions = require('firebase-functions');

// The Firebase Admin SDK to access the Firebase Realtime Database.
const admin = require('firebase-admin');
admin.initializeApp(functions.config().firebase);

// // Create and Deploy Your First Cloud Functions
// // https://firebase.google.com/docs/functions/write-firebase-functions


exports.helloWorld = functions.https.onRequest((request, response) => {
 response.send("Hello from Firebase!");
});



// Take the text parameter passed to this HTTP endpoint and insert it into the
// Realtime Database under the path /messages/:pushId/original
exports.updateGyroZ1 = functions.https.onRequest((req, res) => {
  // Grab the text parameter.
  const user1Val = req.query.user1;
  // Push the new message into the Realtime Database using the Firebase Admin SDK.
  return admin.database().ref('/gyros').set({user1: user1Val}).then((snapshot) => {
    // Redirect with 303 SEE OTHER to the URL of the pushed object in the Firebase console.
    return res.redirect(303, snapshot.ref);
  });
});


// Take the text parameter passed to this HTTP endpoint and insert it into the
// Realtime Database under the path /messages/:pushId/original
exports.updateGyroZ2 = functions.https.onRequest((req, res) => {
  // Grab the text parameter.
  const user2Val = req.query.user2;
  // Push the new message into the Realtime Database using the Firebase Admin SDK.
  return admin.database().ref('/gyros').set({user2: user2Val}).then((snapshot) => {
    // Redirect with 303 SEE OTHER to the URL of the pushed object in the Firebase console.
    return res.redirect(303, snapshot.ref);
  });
});
