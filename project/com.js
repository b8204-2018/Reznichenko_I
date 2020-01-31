let servResponse = document.querySelector('#response');

document.forms.MyForm.onsubmit = function (e) {
    e.preventDefault();

    let userInput = document.forms.MyForm.MyForm_inp.value;

    let xhr = new XMLHttpRequest();

    xhr.open('POST', 'ajax.txt');

    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');

    xhr.onreadystatechange = function(){
        if(xhr.readyState === 4 && xhr.status === 200){
            servResponse.textContent = xhr.responseText;
        }
    }

   xhr.send(userInput);
}

