using System.Collections.ObjectModel;

namespace SportsEquipmentRentalMauiApp
{
    public partial class MainPage : ContentPage
    {
        private string clientName;
        public string ClientName
        {
            get { return clientName; }
            set
            {
                clientName = value;
                OnPropertyChanged();
            }
        }

        private EquipmentItem selectedEquipment;
        public EquipmentItem SelectedEquipment
        {
            get { return selectedEquipment; }
            set
            {
                selectedEquipment = value;
                OnPropertyChanged();
            }
        }

        private double numberOfDays;
        public double NumberOfDays
        {
            get { return numberOfDays; }
            set
            {
                numberOfDays = value;
                OnPropertyChanged();
            }
        }

        private bool hasInsurance;
        public bool HasInsurance
        {
            get { return hasInsurance; }
            set
            {
                hasInsurance = value;
                OnPropertyChanged();
            }
        }

        private string resultMessage;
        public string ResultMessage
        {
            get { return resultMessage; }
            set
            {
                resultMessage = value;
                OnPropertyChanged();
            }
        }

        public ObservableCollection<EquipmentItem> EquipmentList { get; set; }

        public MainPage()
        {
            NumberOfDays = 1;
            HasInsurance = false;
            EquipmentList = new ObservableCollection<EquipmentItem>
            {
                new EquipmentItem { Name = "Rower", PricePerDay = 40 },
                new EquipmentItem { Name = "Hulajnoga", PricePerDay = 30 },
                new EquipmentItem { Name = "Rolki", PricePerDay = 20 },
                new EquipmentItem { Name = "Kajak", PricePerDay = 50 }
            };
            InitializeComponent();
        }

        public class EquipmentItem
        {
            public string Name { get; set; }
            public decimal PricePerDay { get; set; }
        }

        void Button_Clicked(object sender, EventArgs e)
        {
            if (string.IsNullOrWhiteSpace(ClientName))
            {
                ResultMessage = "Podaj imię i nazwisko klienta.";
                return;
            }

            if (SelectedEquipment == null)
            {
                ResultMessage = "Wybierz sprzęt z listy.";
                return;
            }

            int dni = (int)NumberOfDays;
            decimal cenaSprzetuZaDzien = SelectedEquipment.PricePerDay;
            decimal kosztSprzetu = dni * cenaSprzetuZaDzien;
            decimal kosztUbezpieczenia = HasInsurance ? (dni * 5) : 0;
            decimal kosztLaczny = kosztSprzetu + kosztUbezpieczenia;
            string ubezpieczenieTekst = HasInsurance ? "TAK" : "NIE";

            ResultMessage =
                $"Klient: {ClientName}\n" +
                $"Sprzęt: {SelectedEquipment.Name}\n" +
                $"Liczba dni: {dni}\n" +
                $"Ubezpieczenie: {ubezpieczenieTekst}\n" +
                $"Koszt sprzętu: {dni} × {cenaSprzetuZaDzien} zł = {kosztSprzetu} zł\n" +
                $"Ubezpieczenie: {dni} × {(HasInsurance ? 5 : 0)} zł = {kosztUbezpieczenia} zł\n" +
                $"Łącznie: {kosztLaczny} zł";
        }
    }
}
