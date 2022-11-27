/* 4.1 */
CREATE TABLE IF NOT EXISTS people (
	id INT NOT NULL AUTO_INCREMENT COMMENT 'Уникальный идентификатор человека',
	lastname VARCHAR(100) COMMENT 'Фамилия',
	name VARCHAR(100) COMMENT 'Имя',
	middlename VARCHAR(100) DEFAULT null COMMENT 'Отчество',
	age INT DEFAULT 0 COMMENT 'Возраст',
	PRIMARY KEY (id)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/* 4.2 */
INSERT INTO people (lastname, name, middlename, age) VALUES
	('Сидоров', 'Иван', 'Михайлович', 15),
	('Иванов', 'Сергей', 'Андреевич', 29),
	('Колесов', 'Алексей', 'Дмитриевич', 32),
	('Михайлов', 'Владислав', 'Леонидович', 56),
	('Ибрагимов', 'Дмитрий', 'Михайлович', 25),
	('Хорошев', 'Леонид', 'Петрович', 27),
	('Васильев', 'Олег', 'Олегович', 67),
	('Николаев', 'Александр', 'Васильевич', 33),
	('Азурбеков', 'Иван', 'Сергеевич', 17),
	('Кантемиров', 'Николай', 'Иванович', 59),
	('Александров', 'Евгений', 'Алексеевич', 45),
	('Уважайкин', 'Иван', 'Александрович', 19);

/* 4.3 */
SELECT * FROM people WHERE TRIM(lastname) = TRIM('Сидоров');
SELECT * FROM people WHERE TRIM(UPPER(lastname)) = TRIM(UPPER('сидоров'));
SELECT * FROM people WHERE TRIM(LOWER(lastname)) = TRIM(LOWER('сидоров'));
SELECT * FROM people WHERE LOWER(lastname) LIKE LOWER('%сидоров%');

/* 4.4 */
UPDATE people SET age = age + 1 WHERE TRIM(UPPER(lastname)) = TRIM(UPPER('сидоров'));

/* 4.5 */
DELETE FROM people WHERE TRIM(UPPER(lastname)) = TRIM(UPPER('сидоров'));