// Constructor Overloading
// Error Method
// Only one Constructor can be created in a class and that Constructor = super class only
class base {
    constructor() {
        console.log("Super class constructor invoked");
    }
    baseData() {
        console.log("Super class baseData invoked");
    }
}
class sub extends base {
    constructor() {
        super();
        //super method to class parent
        console.log("Sub class constructor invoked");
    }
    subData() {
        console.log("Sub class subData invoked");
    }
}

var bObj = new base();
var sObj = new sub();

// ReferenceError: Must call super constructor in derived class before accessing 'this' or returning from derived constructor