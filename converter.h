float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float ft_to_km(void){
    //LUCAS SMITH
    float ft = get_float("Number of feet:");
    float km = ft * 3280.84;
    printf("\nThe number of kilometers is %.2f\n", km);
    return km;
}
float m_to_mi(void){
    //WHAT'S UP IT'S LUCAS SMITH AGAIN
    float m = get_float("Number of meters:");
    float mi = m * 1609.34;
    printf("\nThe number of miles is %.2f\n", mi);
    return mi;
}
