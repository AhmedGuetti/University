function tva(){
  var form = document.formu;
  var typeagr = form.nature.value;
  var prix = parseInt(form.prixht.value);
  var tva;

  if (typeagr == "agricole") tva = 0;
  else if (typeagr == "non agricole") tva = 19;

  else if (typeagr != "agricole" || typeagr != "non agricole") {
    alert("NOT POSSIBLE");
    return;
  }
  alert(prix+((prix*tva)/100));

}
