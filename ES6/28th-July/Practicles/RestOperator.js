/* function overloading : cannot be implemented by traditional approach */

//Error
function add(a, b) {
    var res = a + b;
    console.log("res = " + res);
}
function add(a, b, c) {
    var res = a + b + c;
    console.log("res = " + res);
}
add(34.34, 23.16);
add(56, 3.7, 43.8);