// Year is leap year or not
var year = 2005;
if ((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0)) {
    console.log("Year is leap year");
}
else {
    console.log("Year is not leap year");
}