// Function with his type 
class Addition {
    setA(a) {
        this.a = a;
    }
    setB(b) {
        this.b = b;
    }
    addData() {
        this.c = this.a + this.b;
    }

    showData() {
        console.log("a = " + this.a);
        console.log("b = " + this.b);
        console.log("c = " + this.c);
    }
}

var obj = new Addition();
obj.setA(100);
obj.setB(100);
obj.addData();
obj.showData();
