//inheritance : overriding 
// problem solution
class base {
    data() {
        console.log("Data method of super class invoked");
    }
}
class sub extends base {
    data() {
        super.data();
        console.log("Data method of sub class invoked");
    }
}

var bObj = new base();
bObj.data();
var sObj = new sub();
sObj.data();
sObj.data();



