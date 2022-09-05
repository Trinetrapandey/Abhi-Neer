function init() {
    nm = document.getElementById('name');
    username = document.getElementById('username');

    mobile = document.getElementById('mobile');
    mail = document.getElementById('email');

    err1 = document.getElementById('err1');
    err2 = document.getElementById('err2');
    err3 = document.getElementById('err3');
    err4 = document.getElementById('err4');
    err5 = document.getElementById('err5');
    err6 = document.getElementById('err6');
}

function valid() {
    var name = nm.value;
    var uname = username.value;

    var mob = mobile.value;
    var mail = email.value;

    if (name.length == 0) {
        err1.innerHTML = "*plz enter name";
        err1.style.color = "red";
    }
    else {
        err1.innerHTML = "";
    }
    if (uname.length == 0) {
        err2.innerHTML = "*plz enter name";
        err2.style.color = "red";
    }
    else {
        err2.innerHTML = "";
    }

    if (mob.length == 0) {
        err5.innerHTML = "*plz enter mobile";
        err5.style.color = "red";
    }
    else if (isNaN(mob)) {
        err5.innerHTML = "*plz enter digits";
        err5.style.color = "red"
    }
    else if (mob.length < 10 || mob.length > 10) {
        err5.innerHTML = "enter only 10 digits";
        err5.style.color = "red";
    }
    else if (mob.search(/[6-9]/) == -1) {
        err5.innerHTML = "its not mobile number";
        err5.style.color = "red";
    }
    else {
        err5.innerHTML = "";
    }

    if (mail.search(/[@]/) == -1) {
        err6.innerHTML = "*enter @";
        err6.style.color = "red"
    }
    else {
        err6.innerHTML = " ";
    }
}


