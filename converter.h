float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float cm_to_feet(void)
{
    // Sergio Hinojosa
    float cm = get_float("Number of Centimeters: ");
    float feet = cm*0.0328084;
    printf("\nThe number of feet is %.2f\n", cm);
    return feet;


}
