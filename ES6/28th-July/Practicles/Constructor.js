// Default Constructor
class Employee {
    constructor() {
        this.eName = "Abhi";
        this.eId = 4457;
    }
    setData(name, id) {
        this.eName = name;
        this.eId = id;
    }
    showDetails() {
        console.log("eName = " + this.eName);
        console.log("eId = " + this.eId);
    }
}
var obj = new Employee();
console.log("eName = " + obj.eName);
console.log("eId = " + obj.eId);
console.log("\nAfter Set Value\n");
obj.setData("Neer", 874756);
obj.showDetails();