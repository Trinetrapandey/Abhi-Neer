// pARAMETERISED coNSTRUCTOR
class empDetails {
    constructor(name, id) {  // pARAMETERISED coNSTRUCTOR
        this.eName = name;
        this.eId = id;
    }
    setData(nm, id) {
        this.eName = nm;
        this.eId = id;
    }
    showData() {
        console.log("eName = " + this.eName);
        console.log("eId = " + this.eId);
    }
}
var obj = new empDetails("Elon Musk", 225);
obj.showData();
console.log("\nAfter .............\n");
obj.setData("Warren Buffet", 150);
obj.showData();


