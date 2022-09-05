// Method Overidding
class empDetails {
    eName = null;
    eId = 0;
    setData(eName, eId) {
        this.eName = eName;
        this.eId = eId;
    }
    showDetails() {
        console.log("eName = " + this.eName);
        console.log("eId = " + this.eId);
    }
}
var obj = new empDetails();
obj.showDetails();
console.log("\nAfter Overloading\n");
obj.setData("Neer", 34);
obj.showDetails();