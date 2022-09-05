// Accessing properties of parent by child 
class Parent {
    a = 34;
    pData() {
        console.log("Parent class pData method called---");
    }
}
class Child extends Parent {
    b = 33;
    cData() {
        console.log("Child class cData method called---");
        this.c = this.a + this.b;
        console.log("Addition = " + this.c);
    }
}

var pObj = new Parent();
var cObj = new Child();
pObj.pData();

console.log("pObj.a = " + pObj.a + "\n");
cObj.cData();
console.log("cObj.b = " + cObj.b);
console.log("cObj.a = " + cObj.a);
