// Super Method - used to access super class properties anywhere
// Constructor can be more than 1 but invoking is a different thing
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

var sObj = new sub();
