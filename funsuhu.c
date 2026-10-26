double celcius_fahrenheit(double celcius1){
    return (celcius1 * 1.8) + 32;
}

double celcius_reamur(double celcius2){
    return (4.0 / 5.0) * celcius2;
}

double celcius_kelvin(double celcius3){
    return celcius3 + 273;
}

double fahrenheit_celcius(double fahrenheit1){
    return (fahrenheit1 - 32) * 1.8;
}

double fahrenheit_reamur(double fahrenheit2){
    return 0.4 * (fahrenheit2 - 32);
}

double fahrenheit_kelvin(double fahrenheit3){
    return (fahrenheit3 - 32) * 0.5 + 273;
}

double reamur_celcius(double reamur1){
    return 1.25 * reamur1;
}

double reamur_fahrenheit(double reamur2){
    return (reamur2 * 2.25) + 32;
}

double reamur_kelvin(double reamur3){
    return (reamur3 * 1.25) + 273;
}

double kelvin_celcius(double kelvin1){
    return kelvin1 - 273;
}

double kelvin_fahrenheit(double kelvin2){
    return (kelvin2 - 273) * 1.8 + 32;
}

double kelvin_reamur(double kelvin3){
    return 0.8 * (kelvin3 - 273);
}