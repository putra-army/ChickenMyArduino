void sendSPortabelGrafik() {
  String formatAwal = DBGrafik + getDateGrafik() + "/RFID/" + idGrid;

  String g_amonia     = formatAwal + "/b_amonia";
  String g_berat      = formatAwal + "/a_berat";
  String g_kelembapan = formatAwal + "/c_huma";
  String g_suhu       = formatAwal + "/d_temp";
  String g_idGrid     = formatAwal + "/idGrid";

  Firebase.setString(g_amonia, amonia); // Kirim data berat
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

  Firebase.setString(g_berat, berat); // Kirim data amonia
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

  Firebase.setString(g_kelembapan, hum); // Kirim data kelembapan
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

  Firebase.setString(g_suhu, temp); // Kirim data Temprature
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

  Firebase.setInt(g_idGrid, idGrid.toInt()); // Kirim data Temprature
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
