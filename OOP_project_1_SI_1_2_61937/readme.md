Real Estate


1.	Въведение

Това е програма, предназначена за управление на фирма за недвижими имоти, реализираща функционалности като добавяне и изтриване на имоти, търсене на имоти по определени изисквания, сортиране на имоти по цена в низходящ ред и др.


2.	Описание на приложените алгоритми

Bubble Sort във void RealEstate::sortEstateType(int estateType)


3.	Описание на програмния код

Estate
Клас Estate съдържа необходимите get и set методи, както и 2 virtual метода (които правят класа абстрактен) printEstate() и hasCommunication() (предназначен за недвижимите имоти от тип Plot).
Реализиран е default конструктор и конструктор с параметри.
Overload-нат е операторът „<” за по-лесно сравняване на 2 имота по цените им:
friend bool operator<(const Estate &e1, const Estate &e2);
Дефиниран е и enumeration EstateType, който има за цел да улесни разпознаването от кой клас е даден обект. Този enumeration е достъпен в цялата програма, понеже се използва няколкократно на различни места.
Flat
Клас Flat наследява публично Estate, съдържа необходимите get и set методи, както и собствен print метод, от който се извежда нововъведената информацията за класа и тази на родителския клас (Estate). Реализиран е default конструктор и конструктор с параметри.
House 
Клас House наследява публично Estate, съдържа необходимите get и set методи, както и собствен print метод, от който се извежда нововъведената информацията за класа и тази на родителския клас (Estate). Реализиран е default конструктор и конструктор с параметри.
Plot
Клас House наследява публично Estate, съдържа необходимите get и set методи, както и собствен print метод, от който се извежда нововъведената информацията за класа и тази на родителския клас (Estate). Дефиниран е enumeration Communication, който има за цел да изброи възможните комуникации, които може да притежава даден имот от този тип. В този клас се дава и дефиниция на virtual метода от Estate hasCommunication, който има за цел да провери дали обектът притежава дадена комуникация, подадена към функцията с параметър. Реализиран е default конструктор и конструктор с параметри.
RealEstate
Класът RealEstate съдържа вектор от пойнтъри към обекти от класа Estate, предназначен да съхранява имотите, регистрирани в дадена фирма.
Реализиран е деструктор, предназначен да освободи паметта от пойнтърите към обектите във вектора:
~Company()
Класът реализира следните методи:
void searchPrice(double min, double max); //Търсене на имоти по цена в даден интервал
void searchArea(double min, double max); //Търсене на имоти по площ в даден интервал
       	void searchCity(string city); //Търсене на имоти в даден град
       	void searchEstateType(int estateType); //Търсене на имоти от даден тип
void sortEstateType(int estateType); //Извеждане на всички имоти от даден тип, сортирани по цена в низходящ ред
void searchCommunications(int communicationType); //Търсене на имоти по налични комуникации
     	void addEstate(); //Добавяне на имот
      	void deleteEstate(); //Изтриване на имот
      	void printEstates(); //Извеждане на всички имоти
	Main
	main методът създава обект от класа RealEstate и реализира меню, чрез което могат да 	се достъпят всички негови методи.


4.	Използвани технологии

За създаването на това приложение е използван Code::Blocks 13.12 с mingw32-g++ компилатор. Използваният програмен език е C++98.
