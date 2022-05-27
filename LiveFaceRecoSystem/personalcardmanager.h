#ifndef PERSONALCARDMANAGER_H
#define PERSONALCARDMANAGER_H

#include <QObject>
#include <QFile>
#include <QUuid>

struct PersonalCard
{
	QUuid id;
	QString imagePath;
	QString name, surname, lastname;
	QString post, subdivision;
	int brightnessCorrection, contrastCorrection;

	bool operator == (const PersonalCard &other) const;
	bool operator != (const PersonalCard &other) const;
};

//класс менеджера персональных карт
class PersonalCardManager : public QObject
{
	Q_OBJECT

	QList<PersonalCard> cards;

public:
	explicit PersonalCardManager(QObject *parent = nullptr);

	const QList<PersonalCard> *personalCards() const;

	void addCard(const PersonalCard &card);
	void editCard(const PersonalCard &card);
	void deleteCard(int cardIndex);
	void deleteCard(QUuid cardID);
	void loadCards(const QString &filename);
	void saveCards(const QString &filename);


signals:
	void personalCardAdded(PersonalCard card);
	void personalCardEdited(PersonalCard card);
	void personalCardDeleted(PersonalCard card);

	void personalCardsUpdated(QList<PersonalCard> newCards);

public slots:
	void personalCardAddedSlot(PersonalCard card);
	void personalCardEditedSlot(PersonalCard card);
	void personalCardDeletedSlot(PersonalCard card);

	void updateCards(QList<PersonalCard> newCards);
	void updateCardsFromSync(QList<PersonalCard> newCards);

};

#endif // PERSONALCARDMANAGER_H
