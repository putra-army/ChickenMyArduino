void sendSPortabel() {
  String RFIDA    = DBPortabel + idGrid + "/a_berat";
  String RFIDB    = DBPortabel + idGrid + "/b_amonia";
  String RFIDC    = DBPortabel + idGrid + "/c_huma";
  String RFIDD    = DBPortabel + idGrid + "/d_temp";

  String G_idGrid = DBPortabel + idGrid + "/idGrid";

  String tanggal  = DBPortabel + idGrid + "/tanggal";
  String waktu    = DBPortabel + idGrid + "/waktu";

//  Serial.println(RFIDA);

  Firebase.setFloat(G_idGrid, idGrid.toFloat()); // Kirim data Temprature
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(RFIDA, berat); // Kirim data berat
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(RFIDB, amonia); // Kirim data amonia
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(RFIDC, hum); // Kirim data kelembapan
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(RFIDD, temp); // Kirim data Temprature
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(tanggal, getDate()); // Kirim data Temprature
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }

  Firebase.setString(waktu, getTime()); // Kirim data Temprature
  if (Firebase.failed()) {
    // Serial.println("Fail");
    ledFailSend();
    Serial.println(Firebase.error());
//    Serial.println("Gagal");
  }
  else {
    ledSuccessSend();
//    Serial.println("Sukses");
  }
}
