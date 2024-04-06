CREATE TABLE czytelnik (
    nr_karty int PRIMARY KEY,
    imie varchar(20),
    nazwisko varchar(20)
);

CREATE TABLE ksiazka (
    nr_inw int PRIMARY KEY,
    rok int,
    cena decimal,
    wydawnictwo varchar(20),
    tytuł varchar(20),
    autor_nazwisko varchar(20),
    autor_imie varchar(20),
    nr_karty int DEFAULT NULL,
    data_wyp date,

    CONSTRAINT czytelnik_fk FOREIGN KEY (nr_karty) REFERENCES czytelnik(nr_karty) ON UPDATE CASCADE ON DELETE SET NULL
);