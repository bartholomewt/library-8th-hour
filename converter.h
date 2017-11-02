float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float in_to_cm (void)
{
    //TYLER PAMPERIN
    float in = get_float("Number of Inches: ");
    float cm = in * 2.54;
    printf("\nThe number of centimeters is %.2f\n", cm);
    return cm;
}
