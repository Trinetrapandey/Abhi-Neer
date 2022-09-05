// Greatest in 3 Digited Num
var a = 3496, max = 0, ld, temp = a, rev = 0;
console.log("Max = ");
while (a > 0) {
    ld = a % 10; // last digit = 6 , 4 , 3
    // rev = (rev * 10) + ld;
    if (max < ld) {
        max = ld;
    }
    // a = parseInt(a / 10);
    a = Math.floor(a / 10);
}
console.log(max);
