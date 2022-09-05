import * as fs from 'fs';
var content = "ofhdokf oiisfifuifuifdifdf dziuduid foid fduf ufuifdufdzofd f fpufd fdzpuifdpuihuizfpdfpz";
var writeFile = fs.createWriteStream('./ES6/3rd-Aug/Practicles/data1.txt', (err) => {
    console.log(err);
});
writeFile.write(content);
writeFile.end();
writeFile.on("finish", () => {
    console.log("Content added successfully");
});

writeFile.on("error", (err) => {
    console.log(err);
});
