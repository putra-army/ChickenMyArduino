void sendSTetap() {
  //=======================================================UPLOAD TO SERVER==
  bool stsS1, stsS2, stsW1;
  stsS1 = false;
  stsS2 = false;
  stsW1 = false;

  if (sFixTemp.toFloat() > sFixTempRef.toFloat() + galatSFixTemp.toFloat() || sFixTemp.toFloat() < sFixTempRef.toFloat() - galatSFixTemp.toFloat()) {
    sFixTempRef = sFixTemp;
    Firebase.setString(DBRataSuhu, String(sFixTemp));
    stsS1 = true;
  }
  if (sFixHumi.toFloat() > sFixHumiRef.toFloat() + galatSFixHuma.toFloat() || sFixHumi.toFloat() < sFixHumiRef.toFloat() - galatSFixHuma.toFloat()) {
    sFixHumiRef = sFixHumi;
    Firebase.setString(DBRataHumi, String(sFixHumi));
    stsS1 = true;
  }

  if (sFixWindSpeed.toFloat() > sFixWindRef.toFloat() + galatSFixWind.toFloat() || sFixWindSpeed.toFloat() < sFixWindRef.toFloat() - galatSFixWind.toFloat()) {
    sFixWindRef = sFixWindSpeed;
    Firebase.setString(DBWindSpeed, String(sFixWindRef));
    stsW1 = true;
  }

  if ((stsS1 == true) || (stsS2 == true) || (stsW1 == true)) {
    Firebase.setString(DBUpdateTgl, getDate()); // Kirim data Tanggal
    Firebase.setString(DBUpdateWaktu, getTime());
    
    stsS1 = false;
    stsS2 = false;
    stsW1 = false;

    Serial.println("Kirim data ke server ...");
  }
  //=========================================================================
}
