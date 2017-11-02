float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float m_to_ft(void)
{
    //Brandon Baszynski
    float m = get_float("Number of meters:");
    float ft = m / 0.3048;
    printf("\n The number of feet is %.2f\n" ft);
    return ft;
}

float m_to_in(void)
{
    //Brandon Baszynski
    float m = get_float("Number of meters:");
    float in = m / 0.0254;
    printf("\n The number of inches is %.2f\n" in);
    return in;
}
