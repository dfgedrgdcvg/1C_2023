using System.Collections.ObjectModel;
namespace VocabularyFlashcardsMauiApp
{
    public partial class MainPage : ContentPage
    {
        private Flashcard selectedFlashcard;
        public Flashcard SelectedFlashcard
        {
            get { return selectedFlashcard; }
            set
            {
                selectedFlashcard = value;
                OnPropertyChanged();
                TranslationText = string.Empty;
            }
        }

        private string translationText;
        public string TranslationText
        {
            get { return translationText; }
            set
            {
                translationText = value;
                OnPropertyChanged();
            }
        }

        public ObservableCollection<Flashcard> Flashcards { get; set; }

        public MainPage()
        {
            Flashcards = new ObservableCollection<Flashcard>
            {
                new Flashcard { English = "apple", Polish = "jabłko" },
                new Flashcard { English = "house", Polish = "dom" },
                new Flashcard { English = "dog", Polish = "pies" },
                new Flashcard { English = "book", Polish = "książka" },
                new Flashcard { English = "bike", Polish = "rower" }
            };

            InitializeComponent();

            if (Flashcards.Count > 0)
            {
                SelectedFlashcard = Flashcards[0];
            }
        }

        public class Flashcard
        {
            public string English { get; set; }
            public string Polish { get; set; }
        }

        void ShowTranslation_Clicked(object sender, EventArgs e)
        {
            if (SelectedFlashcard != null)
            {
                TranslationText = SelectedFlashcard.Polish;
            }
        }

        void Restart_Clicked(object sender, EventArgs e)
        {
            if (Flashcards.Count > 0)
            {
                cardsCarousel.Position = 0;
                SelectedFlashcard = Flashcards[0];
                TranslationText = string.Empty;
            }
        }
    }
}
