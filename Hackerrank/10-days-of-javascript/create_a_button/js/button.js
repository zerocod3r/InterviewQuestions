var btn = document.createElement("button");
btn.id = "btn";
btn.innerHTML = 0;
btn.className = "classbtn";
document.body.appendChild(btn);
btn.onclick = function(){
    btn.innerHTML = parseInt(btn.innerHTML) + 1;
}
