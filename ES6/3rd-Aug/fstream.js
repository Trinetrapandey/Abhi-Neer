// file stream : writable
// import * as fs from 'fs';
import fs from 'fs';

console.log("Before file operation");
var file_content = "hello The HyperText Markup Language or HTML is the standard markup language for documents designed to be displayed in a web browser. It can be assisted by technologies such as Cascading Style Sheets and scripting languages such as JavaScript. hello";

var writestream = fs.createWriteStream("data2.txt");
// var writeFile = fs.WriteFile("data2.txt",file_content,(err,result)=>{});
// var writeFile = fs.WriteFileSync("data2.txt");
writestream.write(file_content);
writestream.end(); // Confirm data writing ended

writestream.on("finish", () => {
    console.log("Content added successfully....");
})

writestream.on("error", (err) => {
    console.log(err);
})
// Data Fetching not working here
// writestream.on("data", () => {
// console.log("Data Fetching successfully....");
// });
writestream.on("end")
console.log("After file operation");