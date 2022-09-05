//spread operator (...)
// Used to re-initialise existing variable or object without overriding
var empDetails = { "eName": "nirnjan", "eId": 3454 };
console.log("Name = " + empDetails.eName);
console.log("ID = " + empDetails.eId);

empDetails = { ...empDetails, "eSal": 45000, 'eDesignation': 'Trainer' };
console.log("Salary = " + empDetails.eSal);
console.log("Designation = " + empDetails.eDesignation);
