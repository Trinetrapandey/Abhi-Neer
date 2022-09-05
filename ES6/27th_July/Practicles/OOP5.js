// Getter Setter Method
// Getter used to get values
// Setter used to set values

class getterSetter {
    // c;
    setData(a, b) {
        this.a = a;
        this.b = b;
    }
    addData() {
        this.c = this.a + this.b;
    }
    getData() {
        return { "a": this.a, "b": this.b, "c": this.c };

    }
}
var res = new getterSetter();
res.setData(100, 200);
res.addData();
var res = res.getData();
console.log(res);
console.log("a = " + res.a);
console.log("b = " + res.b);
console.log("Addition = " + res.c);
console.log("Key a = " + res["a"]);
console.log("Key b = " + res["b"]);
console.log("Key c = " + res["c"]);


