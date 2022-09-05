// Problem of Overriding of parent class properties by child class properties in Inheritance

// To solve this problem we will use super method
class Parent {
    pData() {
        console.log("Parent class pData method called---");
    }
}
class Child extends Parent {
    pData() {

        console.log("Child class pData method called---");
    }
}
var cObj = new Child();
cObj.pData(); // Executing property of child class rather than base class 
