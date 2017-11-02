float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float in_to_km(void)
{
    //Chloe McQuin
    float in = get_float("Number of inches: ");
    float km = in * .0000254;
    printf("\nThe number of kilometers is %.2f\n", km);
    return km;
}
