class encapsulation {
    setData(name, id) {
        this.eName = name;
        this.eId = id;
    }
    showData() {
        console.log("Ename = " + this.eName);
        console.log("eId = " + this.eId);
    }
}
var obj = new encapsulation();
obj.setData("Nirnjan", 384767);
console.log("out side the class  eName = " + obj.eName);
console.log("eid = " + obj.eId);
obj.showData();