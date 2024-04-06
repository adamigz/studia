CREATE TABLE ksiazka (
    kod int PRIMARY KEY,
    rok int,
    cena decimal,
    wydawnictwo varchar(20),
    tytul varchar(30)
);

CREATE TABLE autor (
    id int PRIMARY KEY,
    imie varchar(20),
    nazwisko varchar(20)
);

CREATE TABLE autor_ksiazka (
    ksiazka_kod int,
    autor_id int,

    CONSTRAINT ksiazka_fk FOREIGN KEY (ksiazka_kod) REFERENCES ksiazka(kod) ON UPDATE CASCADE ON DELETE CASCADE,

    CONSTRAINT autor_fk FOREIGN KEY (autor_id) REFERENCES autor(id) ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE czytelnik (
    nr_karty int PRIMARY KEY,
    imie varchar(20),
    nazwisko varchar(20)
);

CREATE TABLE egzemplarz (
    nr_inw int PRIMARY KEY,
    ksiazka_kod int,
    czytelnik_nr_karty int,
    data_wyp date,

    CONSTRAINT ksiazka_fk FOREIGN KEY (ksiazka_kod) REFERENCES ksiazka(kod) ON UPDATE CASCADE ON DELETE CASCADE,

    CONSTRAINT czytelnik_fk FOREIGN KEY (czytelnik_nr_karty) REFERENCES czytelnik(nr_karty) ON UPDATE CASCADE ON DELETE CASCADE
);