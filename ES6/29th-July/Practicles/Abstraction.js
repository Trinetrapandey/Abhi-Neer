// Abstraction
class eDetails {
    #eName;
    #eId;
    setDetails(en, id) {
        this.#eName = en;
        this.#eId = id;
    }
    showDetails() {
        console.log("Employee Name : " + this.#eName);
        console.log("Employee ID : " + this.#eId);
    }
}

var obj = new eDetails();
obj.setDetails("Mark Jukerburg", 4578939);
obj.showDetails();

// obj.#eName = 56; THis is private so this will not be accessable outside class
