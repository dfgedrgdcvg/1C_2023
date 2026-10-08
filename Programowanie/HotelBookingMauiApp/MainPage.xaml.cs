using System.Collections.ObjectModel;

namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        private string clientName;
        public string ClientName
        {
            get => clientName;
            set
            {
                clientName = value;
                OnPropertyChanged();
            }
        }

        private string userEmail;
        public string UserEmail
        {
            get => userEmail;
            set
            {
                userEmail = value;
                OnPropertyChanged();
            }
        }

        private DateTime minStartDate;
        public DateTime MinStartDate
        {
            get => minStartDate;
            set
            {
                minStartDate = value;
                OnPropertyChanged();
            }
        }

        private DateTime checkInDate;
        public DateTime CheckInDate
        {
            get => checkInDate;
            set
            {
                checkInDate = value;
                OnPropertyChanged();
            }
        }

        private int stayDuration;
        public int StayDuration
        {
            get => stayDuration;
            set
            {
                stayDuration = value;
                OnPropertyChanged();
            }
        }

        private int guestCount;
        public int GuestCount
        {
            get => guestCount;
            set
            {
                guestCount = value;
                OnPropertyChanged();
            }
        }

        public string[] AvailableRooms { get; set; }

        private string chosenRoom;
        public string ChosenRoom
        {
            get => chosenRoom;
            set
            {
                chosenRoom = value;
                OnPropertyChanged();
            }
        }

        private bool hasBreakfast;
        public bool HasBreakfast
        {
            get => hasBreakfast;
            set
            {
                hasBreakfast = value;
                OnPropertyChanged();
            }
        }

        private bool needsParking;
        public bool NeedsParking
        {
            get => needsParking;
            set
            {
                needsParking = value;
                OnPropertyChanged();
            }
        }

        private double discountValue;
        public double DiscountValue
        {
            get => discountValue;
            set
            {
                discountValue = value;
                OnPropertyChanged();
            }
        }

        private string reservationDetails;
        public string ReservationDetails
        {
            get => reservationDetails;
            set
            {
                reservationDetails = value;
                OnPropertyChanged();
            }
        }

        private Command computeTotalCostCommand;
        public Command ComputeTotalCostCommand => computeTotalCostCommand ??= new Command(CalculateCost);

        public MainPage()
        {
            MinStartDate = DateTime.Today;
            CheckInDate = DateTime.Today;
            StayDuration = 1;
            GuestCount = 1;
            HasBreakfast = false;
            NeedsParking = false;
            DiscountValue = 0;
            
            AvailableRooms = new string[]
            {
                "Pokój jednoosobowy",
                "Pokój dwuosobowy",
                "Apartament"
            };

            InitializeComponent();
        }

        private void CalculateCost()
        {
            if (string.IsNullOrWhiteSpace(ClientName))
            {
                ReservationDetails = "Błąd: podaj imię lub nazwisko";
                return;
            }

            if (string.IsNullOrWhiteSpace(UserEmail))
            {
                ReservationDetails = "Uzupełnij adres email";
                return;
            }

            if (!UserEmail.Contains(".") || !UserEmail.Contains("@"))
            {
                ReservationDetails = "Podałeś niepoprawny adres Email";
                return;
            }

            if (string.IsNullOrWhiteSpace(ChosenRoom))
            {
                ReservationDetails = "Błąd: wybierz rodzaj pokoju";
                return;
            }

            if (CheckInDate < DateTime.Today)
            {
                ReservationDetails = "Błąd: data przyjazdu nie może być wcześniejsza niż dzisiaj";
                return;
            }

            double roomPrice = 0;

            switch (ChosenRoom)
            {
                case "Pokój jednoosobowy":
                    roomPrice = 200;
                    break;
                case "Pokój dwuosobowy":
                    roomPrice = 300;
                    break;
                case "Apartament":
                    roomPrice = 500;
                    break;
            }

            double roomCost = StayDuration * roomPrice;
            double breakfastCost = 0;

            if (HasBreakfast)
            {
                breakfastCost = StayDuration * GuestCount * 40;
            }

            double parkingCost = 0;
            if (NeedsParking)
            {
                parkingCost = StayDuration * 30;
            }

            double totalBeforeDiscount = roomCost + breakfastCost + parkingCost;
            double discountAmount = totalBeforeDiscount * DiscountValue / 100;
            double totalCost = totalBeforeDiscount - discountAmount;

            ReservationDetails = $"Imię i nazwisko: {ClientName}\n" +
                $"Data przyjazdu: {CheckInDate:dd.MM.yyyy}\n" +
                $"Liczba nocy: {StayDuration}\n" +
                $"Liczba osób: {GuestCount}\n" +
                $"Pokój: {ChosenRoom}\n" +
                $"Śniadanie: {(HasBreakfast ? "TAK" : "NIE")}\n" +
                $"Parking: {(NeedsParking ? "TAK" : "NIE")}\n" +
                $"Rabat: {DiscountValue}%\n" +
                $"Koszt pokoju: {StayDuration} x {roomPrice}zł = {roomCost}zł\n" +
                $"Śniadanie: {StayDuration} x {GuestCount} x 40zł = {breakfastCost}zł\n" +
                $"Parking: {StayDuration} x 30zł = {parkingCost}zł\n" +
                $"Cena przed rabatem: {totalBeforeDiscount}zł\n" +
                $"Rabat: {discountAmount:F2}zł\n" +
                $"Łączny koszt: {totalCost:F2}zł\n";
        }
    }
}
