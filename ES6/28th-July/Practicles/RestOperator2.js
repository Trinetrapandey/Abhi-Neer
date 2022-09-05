// Rest Operator with different arguments 
// Argumetns manual access
class argsManualAccess {
    manualAccessing(arg1, ...args) {
        // manualAccessing(arg1, arg2, ...args) {
        for (let ar of args) {
        }
        console.log(arg1 + " = " + args);
    }
}

var obj = new argsManualAccess();
obj.manualAccessing("Concanicate = ", "Nirnjan ", " Patel");
