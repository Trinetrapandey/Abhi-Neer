// local variables to class
class Add {
    // declaration of global to class scope
    a;
    b;
    c;
    getData() {
        this.a = 100;
        this.b = 200;
    }
    addData() {
        this.c = this.a + this.b;
    }
    showData() {
        console.log("a = " + this.a);
        console.log("b = " + this.b);
        console.log("Addition = " + this.c);
    }
}
var obj = new Add();
// obj.getData();
// obj.addData();
// obj.showData();
// it is working

// after declaration of global to class scope
obj.getData();
obj.addData();
obj.showData();
// it is also working

