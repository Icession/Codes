// Attach click handlers to .card elements to toggle the dropdown animation

document.addEventListener('DOMContentLoaded', function () {
    const cards = document.querySelectorAll('.card');

    cards.forEach(card => {
        // Toggle on click, but ignore clicks on links inside the card
        card.addEventListener('click', function (e) {
            if (e.target.closest('a')) return; // let links work normally
            card.classList.toggle('expanded');
        });

        // Allow keyboard accessibility: Enter or Space to toggle when focused
        card.setAttribute('tabindex', '0');
        card.addEventListener('keydown', function (e) {
            if (e.key === 'Enter' || e.key === ' ') {
                e.preventDefault();
                card.classList.toggle('expanded');
            }
        });
    });
});