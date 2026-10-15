namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        private string itemTitle;
        public string ItemTitle
        {
            get { return itemTitle; }
            set
            {
                itemTitle = value;
                OnPropertyChanged();
            }
        }

        private int itemPrice;
        public int ItemPrice
        {
            get { return itemPrice; }
            set
            {
                itemPrice = value;
                OnPropertyChanged();
            }
        }

        private int amount;
        public int Amount
        {
            get { return amount; }
            set
            {
                amount = value;
                OnPropertyChanged();
            }
        }

        private bool isExpress;
        public bool IsExpress
        {
            get { return isExpress; }
            set
            {
                isExpress = value;
                OnPropertyChanged();
            }
        }

        private string resultDetails;
        public string ResultDetails
        {
            get { return resultDetails; }
            set
            {
                resultDetails = value;
                OnPropertyChanged();
            }
        }

        private string chosenShipping;
        public string ChosenShipping
        {
            get { return chosenShipping; }
            set
            {
                chosenShipping = value;
                OnPropertyChanged();
            }
        }

        private Command computeCommand;
        public Command ComputeCommand
        {
            get
            {
                if (computeCommand == null)
                {
                    computeCommand = new Command(() => { PerformCalculation(); });
                }
                return computeCommand;
            }
        }

        public string[] ShippingOptions { get; set; }

        public MainPage()
        {
            Amount = 1;
            IsExpress = false;
            ShippingOptions = new string[]
            {
                "Odbiór osobisty",
                "Kurier",
                "Paczkomat"
            };
            InitializeComponent();
        }

        void PerformCalculation()
        {
            double deliveryCost = 0;

            switch (ChosenShipping)
            {
                case "Odbiór osobisty":
                    deliveryCost = 0;
                    break;
                case "Kurier":
                    deliveryCost = 12;
                    break;
                case "Paczkomat":
                    deliveryCost = 10;
                    break;
            }

            double grandTotal = ItemPrice * Amount + deliveryCost;

            if (IsExpress)
            {
                grandTotal += 15;
            }

            ResultDetails =
            $"Produkt: {ItemTitle}\n" +
            $"Cena za sztukę: {ItemPrice}zł \n" +
            $"Liczba sztuk: {Amount} \n" +
            $"Dostawa ekspresowa: {(IsExpress ? "TAK" : "NIE")} \n" +
            $"Sposób dostawy: {ChosenShipping} \n" +
            $"Koszt dostawy: {deliveryCost}zł \n" +
            $"Wynik: {grandTotal}zł \n";
        }
    }
}