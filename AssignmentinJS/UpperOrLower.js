// Upper or lower
var char = 'N';
var n = char.charCodeAt();
var code = String.fromCharCode(65 - 90);

console.log(code);
console.log("N = " + n);
if (char >= String.fromCharCode(65 - 90)) {
    console.log(char + " is in Lower case");
}
else if (char >= 97 && char <= 122) {
    console.log(char + " is in Upper case");
}
else {
    console.log(char + " is not a character");
}