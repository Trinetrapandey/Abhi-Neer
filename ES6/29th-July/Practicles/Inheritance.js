//inheritance
class Parent {
    parentFunc() {
        console.log("ParentFunc Called");
    }
}
class Child extends Parent {
    childFunc() {
        console.log("childFunc Called");
    }
}

var obj = new Child();
obj.childFunc();
obj.parentFunc();
