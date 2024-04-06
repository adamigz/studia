CREATE TYPE osoba AS (
    imie text,
    nazwisko text
);

CREATE TABLE ksiazka (
    kod int PRIMARY KEY,
    tytul varchar(20),
    autor osoba
);

CREATE TABLE wydanie (
    id int PRIMARY KEY,
    wydawnictwo text,
    cena decimal,
    rok int,
    ksiazka_kod int,

    CONSTRAINT ksiazka_fk FOREIGN KEY (ksiazka_kod) REFERENCES ksiazka(kod) ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE czytelnik (
    nr_karty int PRIMARY KEY,
    imie text,
    nazwisko text
);

CREATE TABLE egzemplarz (
    nr_inw int PRIMARY KEY,
    wydanie_id int,
    czytelnik_nr_karty int,
    data_od date,

    CONSTRAINT wydanie_fk FOREIGN KEY (wydanie_id) REFERENCES wydanie(id) ON UPDATE CASCADE ON DELETE CASCADE,

    CONSTRAINT czyta_fk FOREIGN KEY (czytelnik_nr_karty) REFERENCES czytelnik(nr_karty) ON UPDATE CASCADE ON DELETE SET NULL
);

CREATE TABLE wypozyczenia (
    id int PRIMARY KEY,
    data_od date,
    data_do date,
    czytelnik_nr_karty int,
    egzemplarz_nr_inw int,

    CONSTRAINT czytelnik_fk FOREIGN KEY (czytelnik_nr_karty) REFERENCES czytelnik(nr_karty) ON UPDATE CASCADE ON DELETE CASCADE,

    CONSTRAINT egzemplarz_fk FOREIGN KEY (egzemplarz_nr_inw) REFERENCES egzemplarz(nr_inw) ON UPDATE CASCADE ON DELETE CASCADE
);

