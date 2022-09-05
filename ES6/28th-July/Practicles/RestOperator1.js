// Rest Operator (...)
function add(...args) {
    var sum = 0;
    for (let x of args) {
        sum += x;
    }
    console.log("sum = " + sum);
}

add(34.34, 23.16, 56, 3.7, 43.8);
add(56, 3.7, 43.8); // Calling with different parameters