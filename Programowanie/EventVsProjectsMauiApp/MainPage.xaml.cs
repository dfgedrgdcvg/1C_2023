namespace SimpleCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            if (rotationLabel is not null && sender is Slider slider)
            {
                rotationLabel.Rotation = slider.Value;
            }
        }
    }
}
