int maxDryValue = 10; 

int readSoilHumidity() {
    int soil = 0;
    for (int i = 0; i < 3; i++) {
        int rawSoil = analogRead(potPin); 
        rawSoil = constrain(rawSoil, 485, 1023); 
        soil += map(rawSoil, 485, 1023, 100, 0); 
        delay(75);
    }
    int fsoil = soil / 3; 
    return fsoil;
}
