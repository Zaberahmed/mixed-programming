$("document").ready(function () {
	let contacts = []; // Define an array to store the contacts

	$("#addButton").click(addContact); // Add an event listener for the add button

	function addContact() {
		// Function to add a contact to the array

		let name = $("#nameInput").val(); // Get the values from the input fields
		let surname = $("#surnameInput").val();
		let phone = $("#phoneInput").val();
		let address = $("#addressInput").val();

		// Check whether the inputs are empty or not!
		if (name.length && surname.length && phone.length && address.length) {
			let contact = {
				// Create a new object with the values and add it to the array
				name: name,
				surname: surname,
				phone: phone,
				address: address,
			};
			contacts.push(contact);
			alert("Successfully Added");
			clear();
		} else {
			alert("You cannot leave empty fields!");
			clear();
		}
	}

	function deleteContact(index) {
		// Function to delete a contact from the array and update the table

		contacts.splice(index, 1); // Remove the contact from the array

		if (contacts.length)
			// Update the table only if there is any contact left
			updateTable();
		else {
			let element = document.getElementById("contactsTableContainer");
			element.style.display = "none";
		}
	}

	$("#showall").click(updateTable); //Add an event listener for the show all button

	function updateTable() {
		// Function to update the table with the contacts array

		clear(); // Clear the table body
		let element = document.getElementById("contactsTableContainer"); //overwrite CSS display
		element.style.display = "block";

		let row = $("<tr>"); // Adding Table Headers
		row.append($("<th>").text("Name"));
		row.append($("<th>").text("Surname"));
		row.append($("<th>").text("Phone number"));
		row.append($("<th>").text("Address"));
		$("#contactsTable").append(row);

		for (let i = 0; i < contacts.length; i++) {
			// Loop through the contacts array and add each contact to the table
			let contact = contacts[i];
			let row = $("<tr>");
			row.append($("<td>").text(contact.name));
			row.append($("<td>").text(contact.surname));
			row.append($("<td>").text(contact.phone));
			row.append($("<td>").text(contact.address));
			let deleteButton = $("<button>").addClass("deleteButton").text("Delete"); //Adding a delete button with onclick function
			deleteButton.click(function () {
				deleteContact(i);
			});
			row.append($("<td>").append(deleteButton));
			$("#contactsTable").append(row);
		}
	}

	$("#searchInput").on("input", searchContacts); // Add an event listener for the search input field

	function searchContacts() {
		// Function to filter the contacts
		clear();

		let query = $("#searchInput").val().toLowerCase(); // Get the search query from the input field

		let row = $("<tr>"); // Adding Table Headers
		row.append($("<th>").text("Name"));
		row.append($("<th>").text("Surname"));
		row.append($("<th>").text("Phone number"));
		row.append($("<th>").text("Address"));
		$("#contactsTable").append(row);

		contacts.forEach(function (contact) {
			// loop through the contacts array and add each matching contact to the table
			if (
				contact.name.toLowerCase().includes(query.toLowerCase()) ||
				contact.surname.toLowerCase().includes(query.toLowerCase()) ||
				contact.phone.toLowerCase().includes(query.toLowerCase()) ||
				contact.address.toLowerCase().includes(query.toLowerCase())
			) {
				let row = $("<tr>");
				row.append($("<td>").text(contact.name));
				row.append($("<td>").text(contact.surname));
				row.append($("<td>").text(contact.phone));
				row.append($("<td>").text(contact.address));
				$("#contactsTable").append(row);
			} else alert("No matches found!");
		});
	}

	$("#clearall").click(clear); // Add an event listener for clear button
	function clear() {
		$("#contactsTable").empty(); // Clear the table

		$("#nameInput").val(""); // Clear the input fields
		$("#surnameInput").val("");
		$("#phoneInput").val("");
		$("#addressInput").val("");
	}
});
